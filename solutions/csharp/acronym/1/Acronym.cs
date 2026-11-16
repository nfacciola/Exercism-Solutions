using System;
using System.Linq;

public static class Acronym
{
    public static string Abbreviate(string phrase)
    {
        string result = new string(phrase.Where(c => c == '-' || !char.IsPunctuation(c)).ToArray());
        string[] arr = result.Split(' ');
        string acronym = "";
        for(int i = 0; i < arr.Length; i++){
            Console.WriteLine(arr[i]);
            if(!arr[i].Contains('-')){
                acronym += arr[i][0];
            }else{
                string[] subArr = arr[i].Split('-');
                Console.WriteLine(subArr.Length);
                for(int j = 0; j < subArr.Length; j++){
                    if(subArr[j].Length > 0)
                        acronym += subArr[j][0];
                }
            }
        }
        return acronym.ToUpper();
    }
}