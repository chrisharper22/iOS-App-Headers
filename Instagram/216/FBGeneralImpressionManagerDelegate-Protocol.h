//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBGeneralImpressionData, FBGeneralImpressionManager, NSString;

@protocol FBGeneralImpressionManagerDelegate <NSObject>
- (void)impressionManager:(FBGeneralImpressionManager *)arg1 willLogClickSessionEnd:(NSString *)arg2 clickSessionDurationMs:(unsigned long long)arg3;
- (void)impressionManager:(FBGeneralImpressionManager *)arg1 willLogClick:(FBGeneralImpressionData *)arg2;
- (void)impressionManager:(FBGeneralImpressionManager *)arg1 willLogImpression:(FBGeneralImpressionData *)arg2;
@end

