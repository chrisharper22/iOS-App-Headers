//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, RCTBridge;

@interface RCTBundleManager : NSObject
{
    RCTBridge *_bridge;
    CDUnknownBlockType _bridgelessBundleURLGetter;
    CDUnknownBlockType _bridgelessBundleURLSetter;
    CDUnknownBlockType _bridgelessBundleURLDefaultGetter;
}

- (void).cxx_destruct;
- (void)resetBundleURL;
@property(retain) NSURL *bundleURL;
- (void)setBridgelessBundleURLGetter:(CDUnknownBlockType)arg1 andSetter:(CDUnknownBlockType)arg2 andDefaultGetter:(CDUnknownBlockType)arg3;
- (void)setBridge:(id)arg1;

@end

