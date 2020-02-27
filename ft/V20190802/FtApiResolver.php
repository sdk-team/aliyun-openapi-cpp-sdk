<?php

namespace AlibabaCloud\Ft\V20190802;

use AlibabaCloud\Client\Resolver\ApiResolver;

/**
 * @method Add23 add23(array $options = [])
 * @method AddApi addApi(array $options = [])
 * @method AddTest addTest(array $options = [])
 * @method CreateInstance createInstance(array $options = [])
 * @method DescribeOssSpec describeOssSpec(array $options = [])
 * @method DescribeOssSpec describeOssSpec(array $options = [])
 * @method RoaHttpStringResponseTest roaHttpStringResponseTest(array $options = [])
 * @method Testlmz01 testlmz01(array $options = [])
 */
class FtApiResolver extends ApiResolver
{
}

class Roa extends \AlibabaCloud\Client\Resolver\Roa
{
    /** @var string */
    public $product = 'Ft';

    /** @var string */
    public $version = '2019-08-02';

    /** @var string */
    public $method = 'POST';
}

class Add23 extends Roa
{
    /** @var string */
    public $pathPattern = '/add23';
}

/**
 * @method string getAce()
 */
class AddApi extends Roa
{
    /** @var string */
    public $pathPattern = '/abc';

    /**
     * @param string $value
     *
     * @return $this
     */
    public function withAce($value)
    {
        $this->data['Ace'] = $value;
        $this->options['query']['Ace'] = $value;

        return $this;
    }
}

class AddTest extends Roa
{
    /** @var string */
    public $pathPattern = '/addtest';
}

class CreateInstance extends Roa
{
    /** @var string */
    public $pathPattern = '/project/publish';
}

/**
 * @method string getPassword()
 * @method string getTimeStemp()
 * @method $this withTimeStemp($value)
 */
class DescribeOssSpec extends Roa
{
    /** @var string */
    public $pathPattern = '/oss/spec';

    /**
     * @param string $value
     *
     * @return $this
     */
    public function withPassword($value)
    {
        $this->data['Password'] = $value;
        $this->options['query']['Password'] = $value;

        return $this;
    }
}

/**
 * @method string getPassword()
 * @method string getTimeStemp()
 * @method $this withTimeStemp($value)
 */
class DescribeOssSpec extends Roa
{
    /** @var string */
    public $pathPattern = '/oss/spec';

    /**
     * @param string $value
     *
     * @return $this
     */
    public function withPassword($value)
    {
        $this->data['Password'] = $value;
        $this->options['query']['Password'] = $value;

        return $this;
    }
}

/**
 * @method string getQueryParam()
 */
class RoaHttpStringResponseTest extends Roa
{
    /** @var string */
    public $pathPattern = '/web/getData';

    /**
     * @param string $value
     *
     * @return $this
     */
    public function withQueryParam($value)
    {
        $this->data['QueryParam'] = $value;
        $this->options['query']['QueryParam'] = $value;

        return $this;
    }
}

class Testlmz01 extends Roa
{
    /** @var string */
    public $pathPattern = '/a';
}
