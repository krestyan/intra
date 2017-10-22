int		nmatch(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s2 == '*')
	{
		if (!*s1)
			return (nmatch(s1, s2 + 1));
		else
			return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	}
	else if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else
		return (0);
}