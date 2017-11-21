# EnvoyAI Developer API Documentation And Examples Repository

You built an algorithm that could save lives. What happens next?

Partner with McCoy to distribute your algorithm.

Read this documentation and explore our examples to learn how to integrate your algorithm into the McCoy Platform.

## Basics and Terminology

### Machine
Your algorithm can be any combination of trained statistical model, neural net, explicit procedure, decision tree or 
anything else you can imagine.
In order for an algorithm to be used on the EnvoyAI Platform, it must be packaged into a container along with its runtime 
requirements, schema information, and other metadata.
We call this packaged container a _machine_.

### Schema
The data that your algorithm evaluates is called its _inputs_, the data your algorithm produces is called its _outputs_.
Both input and outputs must have well defined data type definitions called a _schema_.
The EnvoyAI Platform uses [JSON-Schema](http://json-schema.org) and some custom extensions to describe the Machine inputs and outputs as well as some display information. Our platform currently supports both JSON and YAML formatted schemas.

### Accounts, Organizations, and Sharing
If you are the first person from your organization to register to use the EnvoyAI Platform, you can create an account for your organization.
Your account login will be your email address. If your organization is already registered, you must be invited to join
by one of your colleagues to gain access.
Each new organization will be given access to some example machines, the source code of which can be found in this repository.
If you or others in your organization creates a new machine, your organization is now considered the _author_ of that machine.


## Examples and References
The best way to learn about how to create a machine on the EnvoyAI Platform is to read the [helloworld walk-through](./test-helloworld/README.md).

To learn more about advanced input and output types, please see the [test-echo](./test-echo/README.md) example.

To see an example that uses a trained network to do image recognition, see the caffe example we adapated for our platform 
[caffe-cpp_classification](./caffe-cpp_classification/).

To learn more about debugging and error handling on the EnvoyAI platform please see the [test-err](./test-err/) example.

To download and install Docker please visit [www.docker.com](https://www.docker.com/get-docker).

To learn more about Docker we recommend reading the [docs](https://docs.docker.com/) or viewing 
[this great pluralsight video](https://www.pluralsight.com/courses/docker-deep-dive).

To log into the site and try it out visit [secure.mccoymed.com](https://secure.mccoymed.com).
