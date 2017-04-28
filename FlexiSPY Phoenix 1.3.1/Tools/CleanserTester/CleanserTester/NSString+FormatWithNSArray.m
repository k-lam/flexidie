//
//  NSString+FormatWithNSArray.m
//  UrlProtector
//
//  Created by Pichaya Srifar on 10/13/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "NSString+FormatWithNSArray.h"
#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonDigest.h>

@implementation NSString (FormatWithNSArray)

- (NSString *) md5
{
    const char *cStr = [self UTF8String];
    unsigned char result[16];
    CC_MD5( cStr, (uint)strlen(cStr), result ); // This is the md5 call
    return [NSString stringWithFormat:
            @"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
            result[0], result[1], result[2], result[3], 
            result[4], result[5], result[6], result[7],
            result[8], result[9], result[10], result[11],
            result[12], result[13], result[14], result[15]
            ];  
}

+ (NSString *) stringWithFormat: (NSString *) format array: (NSArray *) arguments {
    return [NSString stringWithFormat: format ,
            (arguments.count>0) ? [arguments objectAtIndex: 0]: nil,
            (arguments.count>1) ? [arguments objectAtIndex: 1]: nil,
            (arguments.count>2) ? [arguments objectAtIndex: 2]: nil,
            (arguments.count>3) ? [arguments objectAtIndex: 3]: nil,
            (arguments.count>4) ? [arguments objectAtIndex: 4]: nil,
            (arguments.count>5) ? [arguments objectAtIndex: 5]: nil,
            (arguments.count>6) ? [arguments objectAtIndex: 6]: nil,
            (arguments.count>7) ? [arguments objectAtIndex: 7]: nil,
            (arguments.count>8) ? [arguments objectAtIndex: 8]: nil,
            (arguments.count>9) ? [arguments objectAtIndex: 9]: nil,
            (arguments.count>10) ? [arguments objectAtIndex: 10]: nil,
            (arguments.count>11) ? [arguments objectAtIndex: 11]: nil,
            (arguments.count>12) ? [arguments objectAtIndex: 12]: nil,
            (arguments.count>13) ? [arguments objectAtIndex: 13]: nil,
            (arguments.count>14) ? [arguments objectAtIndex: 14]: nil,
            (arguments.count>15) ? [arguments objectAtIndex: 15]: nil,
            (arguments.count>16) ? [arguments objectAtIndex: 16]: nil,
            (arguments.count>17) ? [arguments objectAtIndex: 17]: nil,
            (arguments.count>18) ? [arguments objectAtIndex: 18]: nil,
            (arguments.count>19) ? [arguments objectAtIndex: 19]: nil,
            (arguments.count>20) ? [arguments objectAtIndex: 20]: nil,
            (arguments.count>21) ? [arguments objectAtIndex: 21]: nil,
            (arguments.count>22) ? [arguments objectAtIndex: 22]: nil,
            (arguments.count>23) ? [arguments objectAtIndex: 23]: nil,
            (arguments.count>24) ? [arguments objectAtIndex: 24]: nil,
            (arguments.count>25) ? [arguments objectAtIndex: 25]: nil,
            (arguments.count>26) ? [arguments objectAtIndex: 26]: nil,
            (arguments.count>27) ? [arguments objectAtIndex: 27]: nil,
            (arguments.count>28) ? [arguments objectAtIndex: 28]: nil,
            (arguments.count>29) ? [arguments objectAtIndex: 29]: nil,
            (arguments.count>30) ? [arguments objectAtIndex: 30]: nil,
            (arguments.count>31) ? [arguments objectAtIndex: 31]: nil,
            (arguments.count>32) ? [arguments objectAtIndex: 32]: nil,
            (arguments.count>33) ? [arguments objectAtIndex: 33]: nil,
            (arguments.count>34) ? [arguments objectAtIndex: 34]: nil,
            (arguments.count>35) ? [arguments objectAtIndex: 35]: nil,
            (arguments.count>36) ? [arguments objectAtIndex: 36]: nil,
            (arguments.count>37) ? [arguments objectAtIndex: 37]: nil,
            (arguments.count>38) ? [arguments objectAtIndex: 38]: nil,
            (arguments.count>39) ? [arguments objectAtIndex: 39]: nil,
            (arguments.count>40) ? [arguments objectAtIndex: 40]: nil,
            (arguments.count>41) ? [arguments objectAtIndex: 41]: nil,
            (arguments.count>42) ? [arguments objectAtIndex: 42]: nil,
            (arguments.count>43) ? [arguments objectAtIndex: 43]: nil,
            (arguments.count>44) ? [arguments objectAtIndex: 44]: nil,
            (arguments.count>45) ? [arguments objectAtIndex: 45]: nil,
            (arguments.count>46) ? [arguments objectAtIndex: 46]: nil,
            (arguments.count>47) ? [arguments objectAtIndex: 47]: nil,
            (arguments.count>48) ? [arguments objectAtIndex: 48]: nil,
            (arguments.count>49) ? [arguments objectAtIndex: 49]: nil,
            (arguments.count>50) ? [arguments objectAtIndex: 50]: nil,
            (arguments.count>51) ? [arguments objectAtIndex: 51]: nil,
            (arguments.count>52) ? [arguments objectAtIndex: 52]: nil,
            (arguments.count>53) ? [arguments objectAtIndex: 53]: nil,
            (arguments.count>54) ? [arguments objectAtIndex: 54]: nil,
            (arguments.count>55) ? [arguments objectAtIndex: 55]: nil,
            (arguments.count>56) ? [arguments objectAtIndex: 56]: nil,
            (arguments.count>57) ? [arguments objectAtIndex: 57]: nil,
            (arguments.count>58) ? [arguments objectAtIndex: 58]: nil,
            (arguments.count>59) ? [arguments objectAtIndex: 59]: nil,
            (arguments.count>60) ? [arguments objectAtIndex: 60]: nil,
            (arguments.count>61) ? [arguments objectAtIndex: 61]: nil,
            (arguments.count>62) ? [arguments objectAtIndex: 62]: nil,
            (arguments.count>63) ? [arguments objectAtIndex: 63]: nil,
            (arguments.count>64) ? [arguments objectAtIndex: 64]: nil,
            (arguments.count>65) ? [arguments objectAtIndex: 65]: nil,
            (arguments.count>66) ? [arguments objectAtIndex: 66]: nil,
            (arguments.count>67) ? [arguments objectAtIndex: 67]: nil,
            (arguments.count>68) ? [arguments objectAtIndex: 68]: nil,
            (arguments.count>69) ? [arguments objectAtIndex: 69]: nil,
            (arguments.count>70) ? [arguments objectAtIndex: 70]: nil,
            (arguments.count>71) ? [arguments objectAtIndex: 71]: nil,
            (arguments.count>72) ? [arguments objectAtIndex: 72]: nil,
            (arguments.count>73) ? [arguments objectAtIndex: 73]: nil,
            (arguments.count>74) ? [arguments objectAtIndex: 74]: nil,
            (arguments.count>75) ? [arguments objectAtIndex: 75]: nil,
            (arguments.count>76) ? [arguments objectAtIndex: 76]: nil,
            (arguments.count>77) ? [arguments objectAtIndex: 77]: nil,
            (arguments.count>78) ? [arguments objectAtIndex: 78]: nil,
            (arguments.count>79) ? [arguments objectAtIndex: 79]: nil,
            (arguments.count>80) ? [arguments objectAtIndex: 80]: nil,
            (arguments.count>81) ? [arguments objectAtIndex: 81]: nil,
            (arguments.count>82) ? [arguments objectAtIndex: 82]: nil,
            (arguments.count>83) ? [arguments objectAtIndex: 83]: nil,
            (arguments.count>84) ? [arguments objectAtIndex: 84]: nil,
            (arguments.count>85) ? [arguments objectAtIndex: 85]: nil,
            (arguments.count>86) ? [arguments objectAtIndex: 86]: nil,
            (arguments.count>87) ? [arguments objectAtIndex: 87]: nil,
            (arguments.count>88) ? [arguments objectAtIndex: 88]: nil,
            (arguments.count>89) ? [arguments objectAtIndex: 89]: nil,
            (arguments.count>90) ? [arguments objectAtIndex: 90]: nil,
            (arguments.count>91) ? [arguments objectAtIndex: 91]: nil,
            (arguments.count>92) ? [arguments objectAtIndex: 92]: nil,
            (arguments.count>93) ? [arguments objectAtIndex: 93]: nil,
            (arguments.count>94) ? [arguments objectAtIndex: 94]: nil,
            (arguments.count>95) ? [arguments objectAtIndex: 95]: nil,
            (arguments.count>96) ? [arguments objectAtIndex: 96]: nil,
            (arguments.count>97) ? [arguments objectAtIndex: 97]: nil,
            (arguments.count>98) ? [arguments objectAtIndex: 98]: nil,
            (arguments.count>99) ? [arguments objectAtIndex: 99]: nil,
            (arguments.count>100) ? [arguments objectAtIndex: 100]: nil,
            (arguments.count>101) ? [arguments objectAtIndex: 101]: nil,
            (arguments.count>102) ? [arguments objectAtIndex: 102]: nil,
            (arguments.count>103) ? [arguments objectAtIndex: 103]: nil,
            (arguments.count>104) ? [arguments objectAtIndex: 104]: nil,
            (arguments.count>105) ? [arguments objectAtIndex: 105]: nil,
            (arguments.count>106) ? [arguments objectAtIndex: 106]: nil,
            (arguments.count>107) ? [arguments objectAtIndex: 107]: nil,
            (arguments.count>108) ? [arguments objectAtIndex: 108]: nil,
            (arguments.count>109) ? [arguments objectAtIndex: 109]: nil,
            (arguments.count>110) ? [arguments objectAtIndex: 110]: nil,
            (arguments.count>111) ? [arguments objectAtIndex: 111]: nil,
            (arguments.count>112) ? [arguments objectAtIndex: 112]: nil,
            (arguments.count>113) ? [arguments objectAtIndex: 113]: nil,
            (arguments.count>114) ? [arguments objectAtIndex: 114]: nil,
            (arguments.count>115) ? [arguments objectAtIndex: 115]: nil,
            (arguments.count>116) ? [arguments objectAtIndex: 116]: nil,
            (arguments.count>117) ? [arguments objectAtIndex: 117]: nil,
            (arguments.count>118) ? [arguments objectAtIndex: 118]: nil,
            (arguments.count>119) ? [arguments objectAtIndex: 119]: nil,
            (arguments.count>120) ? [arguments objectAtIndex: 120]: nil,
            (arguments.count>121) ? [arguments objectAtIndex: 121]: nil,
            (arguments.count>122) ? [arguments objectAtIndex: 122]: nil,
            (arguments.count>123) ? [arguments objectAtIndex: 123]: nil,
            (arguments.count>124) ? [arguments objectAtIndex: 124]: nil,
            (arguments.count>125) ? [arguments objectAtIndex: 125]: nil,
            (arguments.count>126) ? [arguments objectAtIndex: 126]: nil,
            (arguments.count>127) ? [arguments objectAtIndex: 127]: nil,
            (arguments.count>128) ? [arguments objectAtIndex: 128]: nil,
            (arguments.count>129) ? [arguments objectAtIndex: 129]: nil,
            (arguments.count>130) ? [arguments objectAtIndex: 130]: nil,
            (arguments.count>131) ? [arguments objectAtIndex: 131]: nil,
            (arguments.count>132) ? [arguments objectAtIndex: 132]: nil,
            (arguments.count>133) ? [arguments objectAtIndex: 133]: nil,
            (arguments.count>134) ? [arguments objectAtIndex: 134]: nil,
            (arguments.count>135) ? [arguments objectAtIndex: 135]: nil,
            (arguments.count>136) ? [arguments objectAtIndex: 136]: nil,
            (arguments.count>137) ? [arguments objectAtIndex: 137]: nil,
            (arguments.count>138) ? [arguments objectAtIndex: 138]: nil,
            (arguments.count>139) ? [arguments objectAtIndex: 139]: nil,
            (arguments.count>140) ? [arguments objectAtIndex: 140]: nil,
            (arguments.count>141) ? [arguments objectAtIndex: 141]: nil,
            (arguments.count>142) ? [arguments objectAtIndex: 142]: nil,
            (arguments.count>143) ? [arguments objectAtIndex: 143]: nil,
            (arguments.count>144) ? [arguments objectAtIndex: 144]: nil,
            (arguments.count>145) ? [arguments objectAtIndex: 145]: nil,
            (arguments.count>146) ? [arguments objectAtIndex: 146]: nil,
            (arguments.count>147) ? [arguments objectAtIndex: 147]: nil,
            (arguments.count>148) ? [arguments objectAtIndex: 148]: nil,
            (arguments.count>149) ? [arguments objectAtIndex: 149]: nil,
            (arguments.count>150) ? [arguments objectAtIndex: 150]: nil,
            (arguments.count>151) ? [arguments objectAtIndex: 151]: nil];
}

@end
