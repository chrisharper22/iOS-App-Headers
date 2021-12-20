//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;
@protocol SCPIDCaptureUITheming;

@interface SCPIDCaptureRequirementsViewControllerConfiguration : NSObject <NSCopying>
{
    _Bool _isAutoCaptureOn;
    _Bool _shouldHideManualCaptureSwitch;
    NSString *_title;
    NSString *_surfaceRequirementTitle;
    NSString *_surfaceRequirementExplanation;
    NSString *_lightingRequirementTitle;
    NSString *_lightingRequirementExplanation;
    NSString *_frameRequirementTitle;
    NSString *_frameRequirementExplanation;
    NSString *_manualFallbackTitle;
    NSString *_manualFallbackExplanation;
    NSArray *_requirementsExplanationImageViews;
    id <SCPIDCaptureUITheming> _uiTheme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCPIDCaptureUITheming> uiTheme; // @synthesize uiTheme=_uiTheme;
@property(readonly, copy, nonatomic) NSArray *requirementsExplanationImageViews; // @synthesize requirementsExplanationImageViews=_requirementsExplanationImageViews;
@property(readonly, nonatomic) _Bool shouldHideManualCaptureSwitch; // @synthesize shouldHideManualCaptureSwitch=_shouldHideManualCaptureSwitch;
@property(readonly, nonatomic) _Bool isAutoCaptureOn; // @synthesize isAutoCaptureOn=_isAutoCaptureOn;
@property(readonly, copy, nonatomic) NSString *manualFallbackExplanation; // @synthesize manualFallbackExplanation=_manualFallbackExplanation;
@property(readonly, copy, nonatomic) NSString *manualFallbackTitle; // @synthesize manualFallbackTitle=_manualFallbackTitle;
@property(readonly, copy, nonatomic) NSString *frameRequirementExplanation; // @synthesize frameRequirementExplanation=_frameRequirementExplanation;
@property(readonly, copy, nonatomic) NSString *frameRequirementTitle; // @synthesize frameRequirementTitle=_frameRequirementTitle;
@property(readonly, copy, nonatomic) NSString *lightingRequirementExplanation; // @synthesize lightingRequirementExplanation=_lightingRequirementExplanation;
@property(readonly, copy, nonatomic) NSString *lightingRequirementTitle; // @synthesize lightingRequirementTitle=_lightingRequirementTitle;
@property(readonly, copy, nonatomic) NSString *surfaceRequirementExplanation; // @synthesize surfaceRequirementExplanation=_surfaceRequirementExplanation;
@property(readonly, copy, nonatomic) NSString *surfaceRequirementTitle; // @synthesize surfaceRequirementTitle=_surfaceRequirementTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 surfaceRequirementTitle:(id)arg2 surfaceRequirementExplanation:(id)arg3 lightingRequirementTitle:(id)arg4 lightingRequirementExplanation:(id)arg5 frameRequirementTitle:(id)arg6 frameRequirementExplanation:(id)arg7 manualFallbackTitle:(id)arg8 manualFallbackExplanation:(id)arg9 isAutoCaptureOn:(_Bool)arg10 requirementsExplanationImageViews:(id)arg11 uiTheme:(id)arg12 shouldHideManualCaptureSwitch:(_Bool)arg13;

@end

