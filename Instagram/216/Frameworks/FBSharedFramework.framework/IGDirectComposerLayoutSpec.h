//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectComposerAttachmentViewSpec, IGDirectComposerButtonGroupConfig, NSString, UIColor;

@interface IGDirectComposerLayoutSpec : NSObject
{
    _Bool _placeholderGradientTruncationViewVisible;
    IGDirectComposerAttachmentViewSpec *_attachmentViewSpec;
    IGDirectComposerButtonGroupConfig *_leftButtonGroup;
    IGDirectComposerButtonGroupConfig *_leftOvalInsetButtonGroup;
    IGDirectComposerButtonGroupConfig *_rightOvalInsetButtonGroup;
    IGDirectComposerButtonGroupConfig *_rightButtonGroup;
    UIColor *_activeCaretTintColor;
    NSString *_placeholderText;
    NSString *_placeholderAccessibilityText;
    long long _placeholderLineBreakMode;
    struct UIEdgeInsets _ovalInset;
    struct UIEdgeInsets _composerInsets;
}

+ (id)threadComposerQuotedReplyLayoutWithAttachmentViewSpec:(id)arg1 gradientImageGenerator:(id)arg2 backgroundGradientHeight:(double)arg3 composerTheme:(id)arg4 placeholderText:(id)arg5 placeholderAccessibilityText:(id)arg6 launcherSet:(id)arg7;
+ (id)threadComposerOneLineTextComposingLayoutSpecWithAttachmentViewSpec:(id)arg1 businessDirectQuickRepliesEnabled:(_Bool)arg2 selfieStickerUpsellEnabled:(_Bool)arg3 gradientImageGenerator:(id)arg4 backgroundGradientHeight:(double)arg5 composerTheme:(id)arg6 featureGating:(id)arg7 isInteropThread:(_Bool)arg8 threadCapabilities:(id)arg9 launcherSet:(id)arg10;
+ (id)threadComposerOneLineCollapsedLayoutSpecWithAttachmentViewSpec:(id)arg1 plusButtonEnabled:(_Bool)arg2 businessDirectQuickRepliesEnabled:(_Bool)arg3 gradientImageGenerator:(id)arg4 backgroundGradientHeight:(double)arg5 composerTheme:(id)arg6 threadCapabilities:(id)arg7 placeholderText:(id)arg8 placeholderAccessibilityText:(id)arg9 launcherSet:(id)arg10;
+ (id)threadComposerOneLineExpandedLayoutSpecWithAttachmentViewSpec:(id)arg1 isSmallScreenDevice:(_Bool)arg2 productPickerEnabled:(_Bool)arg3 businessToolsEnabled:(_Bool)arg4 orderManagementEnabled:(_Bool)arg5 gradientImageGenerator:(id)arg6 backgroundGradientHeight:(double)arg7 composerTheme:(id)arg8 threadCapabilities:(id)arg9 placeholderText:(id)arg10 placeholderAccessibilityText:(id)arg11 launcherSet:(id)arg12;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool placeholderGradientTruncationViewVisible; // @synthesize placeholderGradientTruncationViewVisible=_placeholderGradientTruncationViewVisible;
@property(readonly, nonatomic) long long placeholderLineBreakMode; // @synthesize placeholderLineBreakMode=_placeholderLineBreakMode;
@property(readonly, nonatomic) NSString *placeholderAccessibilityText; // @synthesize placeholderAccessibilityText=_placeholderAccessibilityText;
@property(readonly, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(readonly, nonatomic) UIColor *activeCaretTintColor; // @synthesize activeCaretTintColor=_activeCaretTintColor;
@property(readonly, nonatomic) struct UIEdgeInsets composerInsets; // @synthesize composerInsets=_composerInsets;
@property(readonly, nonatomic) struct UIEdgeInsets ovalInset; // @synthesize ovalInset=_ovalInset;
@property(readonly, nonatomic) IGDirectComposerButtonGroupConfig *rightButtonGroup; // @synthesize rightButtonGroup=_rightButtonGroup;
@property(readonly, nonatomic) IGDirectComposerButtonGroupConfig *rightOvalInsetButtonGroup; // @synthesize rightOvalInsetButtonGroup=_rightOvalInsetButtonGroup;
@property(readonly, nonatomic) IGDirectComposerButtonGroupConfig *leftOvalInsetButtonGroup; // @synthesize leftOvalInsetButtonGroup=_leftOvalInsetButtonGroup;
@property(readonly, nonatomic) IGDirectComposerButtonGroupConfig *leftButtonGroup; // @synthesize leftButtonGroup=_leftButtonGroup;
@property(readonly, nonatomic) IGDirectComposerAttachmentViewSpec *attachmentViewSpec; // @synthesize attachmentViewSpec=_attachmentViewSpec;
- (id)initWithAttachmentViewSpec:(id)arg1 leftButtonGroup:(id)arg2 leftOvalInsetButtonGroup:(id)arg3 rightOvalInsetButtonGroup:(id)arg4 rightButtonGroup:(id)arg5 ovalInset:(struct UIEdgeInsets)arg6 composerInsets:(struct UIEdgeInsets)arg7 activeCaretTintColor:(id)arg8 placeholderText:(id)arg9 placeholderAccessibilityText:(id)arg10 placeholderLineBreakMode:(long long)arg11 placeholderGradientTruncationViewVisible:(_Bool)arg12;

@end

