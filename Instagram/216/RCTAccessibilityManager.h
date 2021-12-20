//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeAccessibilityManagerSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"

@class NSDictionary, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTAccessibilityManager : NSObject <NativeAccessibilityManagerSpec, RCTBridgeModule>
{
    _Bool _isBoldTextEnabled;
    _Bool _isGrayscaleEnabled;
    _Bool _isInvertColorsEnabled;
    _Bool _isReduceMotionEnabled;
    _Bool _isReduceTransparencyEnabled;
    _Bool _isVoiceOverEnabled;
    RCTViewRegistry *_viewRegistry_DEPRECATED;
    RCTModuleRegistry *_moduleRegistry;
    NSDictionary *_multipliers;
    double _multiplier;
    NSString *_contentSizeCategory;
}

+ (const struct RCTMethodInfo *)__rct_export__37010;
+ (const struct RCTMethodInfo *)__rct_export__3639;
+ (const struct RCTMethodInfo *)__rct_export__3568;
+ (const struct RCTMethodInfo *)__rct_export__3497;
+ (const struct RCTMethodInfo *)__rct_export__3426;
+ (const struct RCTMethodInfo *)__rct_export__3355;
+ (const struct RCTMethodInfo *)__rct_export__3264;
+ (const struct RCTMethodInfo *)__rct_export__3063;
+ (const struct RCTMethodInfo *)__rct_export__2992;
+ (const struct RCTMethodInfo *)__rct_export__2911;
+ (const struct RCTMethodInfo *)__rct_export__2590;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) _Bool isVoiceOverEnabled; // @synthesize isVoiceOverEnabled=_isVoiceOverEnabled;
@property(nonatomic) _Bool isReduceTransparencyEnabled; // @synthesize isReduceTransparencyEnabled=_isReduceTransparencyEnabled;
@property(nonatomic) _Bool isReduceMotionEnabled; // @synthesize isReduceMotionEnabled=_isReduceMotionEnabled;
@property(nonatomic) _Bool isInvertColorsEnabled; // @synthesize isInvertColorsEnabled=_isInvertColorsEnabled;
@property(nonatomic) _Bool isGrayscaleEnabled; // @synthesize isGrayscaleEnabled=_isGrayscaleEnabled;
@property(nonatomic) _Bool isBoldTextEnabled; // @synthesize isBoldTextEnabled=_isBoldTextEnabled;
@property(nonatomic) double multiplier; // @synthesize multiplier=_multiplier;
@property(nonatomic) __weak RCTModuleRegistry *moduleRegistry; // @synthesize moduleRegistry=_moduleRegistry;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED; // @synthesize viewRegistry_DEPRECATED=_viewRegistry_DEPRECATED;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)getCurrentVoiceOverState:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)getCurrentReduceTransparencyState:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)getCurrentReduceMotionState:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)getCurrentInvertColorsState:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)getCurrentGrayscaleState:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)getCurrentBoldTextState:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)getMultiplier:(CDUnknownBlockType)arg1;
- (void)announceForAccessibilityWithOptions:(id)arg1 options:(struct SpecAnnounceForAccessibilityWithOptionsOptions *)arg2;
- (void)announceForAccessibility:(id)arg1;
- (void)setAccessibilityFocus:(double)arg1;
- (void)setAccessibilityContentSizeMultipliers:(struct SpecSetAccessibilityContentSizeMultipliersJSMultipliers *)arg1;
@property(copy, nonatomic) NSDictionary *multipliers; // @synthesize multipliers=_multipliers;
- (double)multiplierForContentSizeCategory:(id)arg1;
- (void)invalidateMultiplier;
- (void)_setIsVoiceOverEnabled:(_Bool)arg1;
- (void)voiceVoiceOverStatusDidChange:(id)arg1;
- (void)reduceTransparencyStatusDidChange:(id)arg1;
- (void)reduceMotionStatusDidChange:(id)arg1;
- (void)invertColorsStatusDidChange:(id)arg1;
- (void)grayscaleStatusDidChange:(id)arg1;
- (void)boldTextStatusDidChange:(id)arg1;
- (void)accessibilityAnnouncementDidFinish:(id)arg1;
- (void)didReceiveNewContentSizeCategory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(nonatomic) __weak RCTBundleManager *bundleManager;
@property(nonatomic) __weak RCTCallableJSModules *callableJSModules;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

