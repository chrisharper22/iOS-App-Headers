//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGInterceptingSwitch;

@protocol IGInterceptingSwitchDelegate <NSObject>
- (void)switchDidInterceptToggling:(IGInterceptingSwitch *)arg1;
- (void)switchDidSucceedToggling:(IGInterceptingSwitch *)arg1;
- (_Bool)switchShouldInterceptToggling:(IGInterceptingSwitch *)arg1;
@end

