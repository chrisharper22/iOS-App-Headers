//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadMessageListDisplayStateProviding-Protocol.h"

@class NSString;
@protocol IGDirectThreadMessageListDisplayStateProviding;

@interface IGDirectThreadMessageListDisplayStateProvider : NSObject <IGDirectThreadMessageListDisplayStateProviding>
{
    id <IGDirectThreadMessageListDisplayStateProviding> _weakProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectThreadMessageListDisplayStateProviding> weakProvider; // @synthesize weakProvider=_weakProvider;
- (id)messageListDisplayState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
