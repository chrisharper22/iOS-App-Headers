//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RCTBridge;

@interface RCTViewRegistry : NSObject
{
    CDUnknownBlockType _bridgelessComponentViewProvider;
    RCTBridge *_bridge;
}

- (void).cxx_destruct;
- (id)viewForReactTag:(id)arg1;
- (void)setBridgelessComponentViewProvider:(CDUnknownBlockType)arg1;
- (void)setBridge:(id)arg1;

@end
