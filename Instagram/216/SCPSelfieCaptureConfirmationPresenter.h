//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCPSelfieCapturedData, UIImage;
@protocol SCPSelfieCaptureTranslationProviding, SCPSelfieCaptureUITheming;

@interface SCPSelfieCaptureConfirmationPresenter : NSObject
{
    _Bool _isVideoPreviewEnabled;
    SCPSelfieCapturedData *_capturedData;
    id <SCPSelfieCaptureUITheming> _uiTheme;
    NSArray *_confirmationImageViews;
    UIImage *_videoPreviewButtonImage;
    id <SCPSelfieCaptureTranslationProviding> _translationProvider;
}

+ (id)newWithCapturedData:(id)arg1 translationProvider:(id)arg2 uiTheme:(id)arg3 confirmationImageViews:(id)arg4 isVideoPreviewEnabled:(_Bool)arg5 videoPreviewButtonImage:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCPSelfieCaptureTranslationProviding> translationProvider; // @synthesize translationProvider=_translationProvider;
@property(readonly, nonatomic) _Bool isVideoPreviewEnabled; // @synthesize isVideoPreviewEnabled=_isVideoPreviewEnabled;
@property(readonly, nonatomic) UIImage *videoPreviewButtonImage; // @synthesize videoPreviewButtonImage=_videoPreviewButtonImage;
@property(readonly, nonatomic) NSArray *confirmationImageViews; // @synthesize confirmationImageViews=_confirmationImageViews;
@property(readonly, nonatomic) id <SCPSelfieCaptureUITheming> uiTheme; // @synthesize uiTheme=_uiTheme;
@property(readonly, nonatomic) SCPSelfieCapturedData *capturedData; // @synthesize capturedData=_capturedData;
- (double)retakeButtonCornerRadius;
- (id)retakeButtonDisabledBackgroundColor;
- (id)retakeButtonHighlightedBackgroundColor;
- (id)retakeButtonBackgroundColor;
- (id)retakeButtonTextColor;
- (id)retakeButtonFont;
- (double)actionButtonCornerRadius;
- (id)actionButtonHighlightedBackgroundColor;
- (id)actionButtonDisabledBackgroundColor;
- (id)actionButtonBackgroundColor;
- (id)actionButtonTextColor;
- (id)actionButtonFont;
- (id)actionButtonSeparatorColor;
- (id)subtitleFont;
- (id)titleFont;
- (id)subtitleColor;
- (id)titleColor;
- (id)scrollViewGradientColor;
- (id)backgroundSurfaceColor;
- (id)navigationBarTintColor;
- (id)retakeButtonTitle;
- (id)actionButtonTitle;
- (id)subtitle;
- (id)title;
- (id)initWithWithCapturedData:(id)arg1 translationProvider:(id)arg2 uiTheme:(id)arg3 confirmationImageViews:(id)arg4 isVideoPreviewEnabled:(_Bool)arg5 videoPreviewButtonImage:(id)arg6;

@end

