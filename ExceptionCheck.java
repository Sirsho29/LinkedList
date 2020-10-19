class ExceptionCheck
{
	public static void main(String args[])
	{
		int a=5,b=args.length,c=0;
		int arr[]={1,2,3,4};
		
		System.out.println("finding a/b");
		try
		{
		
			c=a/b;
			System.out.println(arr[6]);
			
		}
		catch(ArithmeticException e)
		{
		
			System.out.println(e);
		}
			catch(ArrayIndexOutOfBoundsException e)
		{
		
			System.out.println(e);
		}
		
		System.out.println("c="+c);
		System.out.println("Succesfully Completed");
	}
}