[Markdown Guide](https://about.gitlab.com/handbook/markdown-guide/)

> ---

# Using Variadic Parameter Packs in CPP

[Click on Link](https://stackoverflow.com/questions/37200391/multiple-variadic-parameter-pack-for-template-class)

# Lambda Function

`[ capture clause ] (parameters) -> return-type { definition of method } `

<details>
  <summary markdown="span">Click Here to Expand</summary>

- **[&]** : capture all external variable by reference
- **[=]** : capture all external variable by value
- **[a, &b]** : capture a by value and b by reference
- A lambda with empty capture clause [ ] can access only those variable which are local to it.

</details>

```cpp

```
