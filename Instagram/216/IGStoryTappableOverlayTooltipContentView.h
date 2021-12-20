//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGStoryOverlayTapModel, IGStyledString, UIImageView;
@protocol IGCoreTextLinkHandler, IGUserLauncherSetProviding;

@interface IGStoryTappableOverlayTooltipContentView : UIView
{
    UIImageView *_chevronView;
    IGCoreTextView *_textView;
    id <IGUserLauncherSetProviding> _launcherSet;
    _Bool _highlighted;
    _Bool _shouldHideChevron;
    _Bool _shouldTriggerTapsOnEmptySpace;
    IGStoryOverlayTapModel *_tappableOverlay;
    UIView *_iconView;
    double _leftContentPadding;
    double _rightContentPadding;
}

+ (id)_tooltipSubtitleStringStyleWithTapModel:(id)arg1 launcherSet:(id)arg2 module:(id)arg3;
+ (id)_tooltipTitleStringStyleWithTapModel:(id)arg1 launcherSet:(id)arg2 module:(id)arg3;
+ (id)_tooltipSubtitleWithTapModel:(id)arg1 launcherSet:(id)arg2 module:(id)arg3;
+ (id)_addLinkedUserForAttribution:(id)arg1;
+ (id)_leftAlignedSubtitleStyle;
+ (id)_leftAlignedTitleStyle;
+ (id)_standardSubtitleStyle;
+ (id)_standardTitleStyle;
+ (id)styledStringWith:(id)arg1 subtitle:(id)arg2;
+ (id)styledStringWithTapModel:(id)arg1 launcherSet:(id)arg2 module:(id)arg3;
+ (double)tooltipHorizontalRightContentPaddingForTappableOverlay:(id)arg1 launcherSet:(id)arg2;
+ (double)tooltipHorizontalLeftContentPaddingForTappableOverlay:(id)arg1 launcherSet:(id)arg2;
+ (id)tooltipHorizontalEdgePaddingForTappableOverlay:(id)arg1;
+ (_Bool)shouldTriggerTapsOnEmptySpaceForTappableOverlay:(id)arg1 launcherSet:(id)arg2;
+ (_Bool)shouldHideChevronForTappableOverlay:(id)arg1;
+ (id)iconViewForTappableOverlay:(id)arg1 module:(id)arg2 launcherSet:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldTriggerTapsOnEmptySpace; // @synthesize shouldTriggerTapsOnEmptySpace=_shouldTriggerTapsOnEmptySpace;
@property(nonatomic) _Bool shouldHideChevron; // @synthesize shouldHideChevron=_shouldHideChevron;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double rightContentPadding; // @synthesize rightContentPadding=_rightContentPadding;
@property(nonatomic) double leftContentPadding; // @synthesize leftContentPadding=_leftContentPadding;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGStoryOverlayTapModel *tappableOverlay; // @synthesize tappableOverlay=_tappableOverlay;
@property(retain, nonatomic) id <IGCoreTextLinkHandler> coreTextLinkHandler;
@property(retain, nonatomic) IGStyledString *styledString;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithLauncherSet:(id)arg1;

@end

