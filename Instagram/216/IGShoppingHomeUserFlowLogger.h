//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGShoppingHomeUserFlowLogger : NSObject
{
    long long _userFlowType;
    unsigned long long _userFlowInstanceId;
}

- (void)endFail;
- (void)endCancel;
- (void)endSuccess;
- (void)startFlowIfNotOngoing;
- (id)initWithUserFlowType:(long long)arg1;

@end

