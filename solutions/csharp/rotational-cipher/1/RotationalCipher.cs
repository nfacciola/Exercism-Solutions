public static class RotationalCipher
{
    public static string Rotate(string text, int shiftKey)
    {
        char[] chars = text.ToCharArray();
        string ret = "";
        for (int i = 0; i < chars.Length; i++)
        {
            if(!char.IsAsciiLetter(chars[i]))
            {
                ret += chars[i];
            }
            else
            {
                bool isUpper = char.IsUpper(chars[i]);
                char baseChar = isUpper ? 'A' : 'a';

                int offset = chars[i] - baseChar;

                int wrapped = (offset + shiftKey % 26 + 26) % 26;

                ret += (char)(baseChar + wrapped);
            }
        }
        return ret;
    }
}