//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MXMetricManagerSubscriber <NSObject>

@optional
- (void)didReceiveDiagnosticPayloads:(NSArray *)arg1;
- (void)didReceiveMetricPayloads:(NSArray *)arg1;
@end
