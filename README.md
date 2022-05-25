We release tons of resources, including source files like Get-Jobs on our <a href="https://www.venesix.net">Website</a>, so be sure to check us out.

## What is Get-Jobs?

Get-Jobs is another way for developers to interate through jobs in their Roblox Exploits.

## How do you use Get-Jobs?

It's very simple. Just implement the code in the header file into your exploit and use the example below as a reference.

```cpp
void example_Jobs()
{
  std::vector<std::shared_ptr<job_T>> jobs;
  sub_E29450(reinterpret_cast<char*>(sub_E00F50()), jobs);
  
  for (const auto& job : jobs)
  {
    std::cout << job->name << std::endl;
  }
}
```

## When was this last updated?

Get-Jobs is updated as of 05/25/2022 for version-ab1db0c40dae4666.

## Credits

If this is used in your exploits, please give credit to Rapid-Projects on Github. Otherwise feel free to use it wherever you would like.
