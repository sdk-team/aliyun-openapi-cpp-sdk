<?php

namespace AlibabaCloud\Ft\V20180713;

use AlibabaCloud\Client\Resolver\ApiResolver;

/**
 * @method BatchAuditTest01 batchAuditTest01(array $options = [])
 * @method BatchAuditTest02 batchAuditTest02(array $options = [])
 * @method DescribeResourceType describeResourceType(array $options = [])
 * @method FTApiAliasApi fTApiAliasApi(array $options = [])
 * @method FtDynamicAddressDubbo ftDynamicAddressDubbo(array $options = [])
 * @method FtDynamicAddressHsf ftDynamicAddressHsf(array $options = [])
 * @method FtEagleEye ftEagleEye(array $options = [])
 * @method FtFlowSpecial ftFlowSpecial(array $options = [])
 * @method FtGatedLaunchPolicy3Api ftGatedLaunchPolicy3Api(array $options = [])
 * @method FtGatedLaunchPolicy4 ftGatedLaunchPolicy4(array $options = [])
 * @method FtGatedLaunchPolicyApi ftGatedLaunchPolicyApi(array $options = [])
 * @method FtIpFlowControl ftIpFlowControl(array $options = [])
 * @method FtParamList ftParamList(array $options = [])
 * @method TestDubboRetryApi testDubboRetryApi(array $options = [])
 * @method TestErrorCodeForGateWay testErrorCodeForGateWay(array $options = [])
 * @method TestHttpApi testHttpApi(array $options = [])
 */
class FtApiResolver extends ApiResolver
{
}

class Rpc extends \AlibabaCloud\Client\Resolver\Rpc
{
    /** @var string */
    public $product = 'Ft';

    /** @var string */
    public $version = '2018-07-13';

    /** @var string */
    public $method = 'POST';
}

/**
 * @method string getDemo01()
 * @method $this withDemo01($value)
 * @method string getTest010101()
 * @method string getName()
 * @method $this withName($value)
 * @method string getBatchAuditTest01()
 * @method $this withBatchAuditTest01($value)
 */
class BatchAuditTest01 extends Rpc
{

    /**
     * @param string $value
     *
     * @return $this
     */
    public function withTest010101($value)
    {
        $this->data['Test010101'] = $value;
        $this->options['form_params']['Test010101'] = $value;

        return $this;
    }
}

/**
 * @method string getName()
 * @method $this withName($value)
 * @method string getBatchAuditTest01()
 * @method $this withBatchAuditTest01($value)
 */
class BatchAuditTest02 extends Rpc
{
}

/**
 * @method string getProduct()
 * @method $this withProduct($value)
 * @method string getAcceptLanguage()
 * @method $this withAcceptLanguage($value)
 * @method string getEnv()
 * @method $this withEnv($value)
 * @method string getResourceType()
 * @method $this withResourceType($value)
 */
class DescribeResourceType extends Rpc
{

    /** @var string */
    public $method = 'GET';
}

/**
 * @method string getName()
 * @method $this withName($value)
 */
class FTApiAliasApi extends Rpc
{
}

/**
 * @method string getIntValue()
 * @method $this withIntValue($value)
 * @method string getStringValue()
 * @method $this withStringValue($value)
 */
class FtDynamicAddressDubbo extends Rpc
{
}

class FtDynamicAddressHsf extends Rpc
{
}

/**
 * @method string getName()
 * @method $this withName($value)
 */
class FtEagleEye extends Rpc
{
}

/**
 * @method string getName()
 * @method $this withName($value)
 */
class FtFlowSpecial extends Rpc
{
}

/**
 * @method string getName()
 * @method $this withName($value)
 */
class FtGatedLaunchPolicy3Api extends Rpc
{
}

/**
 * @method string getIsGatedLaunch()
 * @method $this withIsGatedLaunch($value)
 */
class FtGatedLaunchPolicy4 extends Rpc
{
}

/**
 * @method string getUnGatedLaunchPolicy()
 * @method $this withUnGatedLaunchPolicy($value)
 */
class FtGatedLaunchPolicyApi extends Rpc
{
}

/**
 * @method string getName()
 * @method $this withName($value)
 */
class FtIpFlowControl extends Rpc
{
}

/**
 * @method array getDisk()
 * @method string getName()
 * @method $this withName($value)
 */
class FtParamList extends Rpc
{

    /**
     * @param array $disk
     *
     * @return $this
     */
	public function withDisk(array $disk)
	{
	    $this->data['Disk'] = $disk;
		foreach ($disk as $depth1 => $depth1Value) {
			foreach ($depth1Value['Size'] as $i => $iValue) {
				$this->options['query']['Disk.' . ($depth1 + 1) . '.Size.' . ($i + 1)] = $iValue;
			}
			foreach ($depth1Value['Type'] as $i => $iValue) {
				$this->options['query']['Disk.' . ($depth1 + 1) . '.Type.' . ($i + 1)] = $iValue;
			}
		}

		return $this;
    }
}

class TestDubboRetryApi extends Rpc
{
}

/**
 * @method string getHttpStatusCode()
 * @method $this withHttpStatusCode($value)
 * @method string getCode()
 * @method $this withCode($value)
 * @method string getSuccess()
 * @method $this withSuccess($value)
 * @method string getMessage()
 * @method $this withMessage($value)
 */
class TestErrorCodeForGateWay extends Rpc
{

    /** @var string */
    public $method = 'GET';
}

/**
 * @method string getIspSignatureSecretKey()
 * @method $this withIspSignatureSecretKey($value)
 * @method string getStringValue()
 * @method string getOtherParam()
 * @method string getBooleanParam()
 * @method $this withBooleanParam($value)
 * @method string getDefaultValue()
 * @method string getIspSignature()
 * @method $this withIspSignature($value)
 */
class TestHttpApi extends Rpc
{

    /**
     * @param string $value
     *
     * @return $this
     */
    public function withStringValue($value)
    {
        $this->data['StringValue'] = $value;
        $this->options['form_params']['StringValue'] = $value;

        return $this;
    }

    /**
     * @param string $value
     *
     * @return $this
     */
    public function withOtherParam($value)
    {
        $this->data['OtherParam'] = $value;
        $this->options['form_params']['OtherParam'] = $value;

        return $this;
    }

    /**
     * @param string $value
     *
     * @return $this
     */
    public function withDefaultValue($value)
    {
        $this->data['DefaultValue'] = $value;
        $this->options['form_params']['DefaultValue'] = $value;

        return $this;
    }
}
