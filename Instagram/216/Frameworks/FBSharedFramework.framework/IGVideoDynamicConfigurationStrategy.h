//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSString;

@interface IGVideoDynamicConfigurationStrategy : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    long long _networkBased_wifiBitrate;
    double _networkBased_wifiMinDownloadBandwidthBps;
    double _networkBased_wifiMaxWidthPortrait;
    double _networkBased_wifiMaxWidthLandscape;
    NSString *_function_function;
}

+ (id)serverDerived;
+ (id)none;
+ (id)networkBasedWithWifiBitrate:(long long)arg1 wifiMinDownloadBandwidthBps:(double)arg2 wifiMaxWidthPortrait:(double)arg3 wifiMaxWidthLandscape:(double)arg4;
+ (id)functionWithFunction:(id)arg1;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 networkBased:(CDUnknownBlockType)arg2 serverDerived:(CDUnknownBlockType)arg3 function:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanNone:(CDUnknownBlockType)arg1 networkBased:(CDUnknownBlockType)arg2 serverDerived:(CDUnknownBlockType)arg3 function:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

