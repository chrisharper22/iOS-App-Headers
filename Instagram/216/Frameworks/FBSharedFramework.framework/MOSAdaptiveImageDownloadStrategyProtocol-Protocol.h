//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class MOSAdaptiveImageQueryStringComponents, NSString, NSURL;

@protocol MOSAdaptiveImageDownloadStrategyProtocol <NSObject>
- (MOSAdaptiveImageQueryStringComponents *)queryForNetworkConditionsAndScanProfile:(NSString *)arg1 options:(CDStruct_6eb6aa4a)arg2;
- (NSURL *)urlForImageURL:(NSURL *)arg1 scanProfile:(NSString *)arg2 options:(CDStruct_6eb6aa4a)arg3;
@end

