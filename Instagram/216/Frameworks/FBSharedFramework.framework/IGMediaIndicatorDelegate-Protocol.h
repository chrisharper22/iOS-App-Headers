//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGMediaIndicator;

@protocol IGMediaIndicatorDelegate <NSObject>
- (void)mediaIndicator:(IGMediaIndicator *)arg1 didChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicator:(IGMediaIndicator *)arg1 willChangeToState:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)mediaIndicatorTapped:(IGMediaIndicator *)arg1;
@end

