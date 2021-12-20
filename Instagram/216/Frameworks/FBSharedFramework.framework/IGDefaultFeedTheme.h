//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedTheme-Protocol.h>

@class NSString;

@interface IGDefaultFeedTheme : NSObject <IGFeedTheme>
{
}

- (_Bool)supportCTAHighlight;
- (id)ctaCustomizableBackgroundColor;
- (id)tombstoneButtonBackgroundColorForReportType:(long long)arg1;
- (id)tombstoneBackgroundColor;
- (double)feedItemBottomSpacing;
- (_Bool)useDarkBackgroundLoadingStyle;
- (id)activityIndicatorColor;
- (long long)activityIndicatorStyle;
- (id)hiddenReasonCellHeaderTextColor;
- (id)hiddenReasonCellBackgroundColor;
- (id)sponsoredTextColorOverride;
- (id)userBadgeColor;
- (id)followButtonColorFollowing;
- (id)followButtonColorNotFollowing;
- (id)placeholderColor;
- (id)dotSeparatorColor;
- (id)internalOnlyColor;
- (id)secondaryTextColor;
- (id)primaryHighlightedTextColor;
- (id)primaryTextColor;
- (id)actionIconColor;
- (id)coauthorStringStyle;
- (id)brandedContentStringStyle;
- (id)bylineStringStyle:(long long)arg1;
- (id)secondaryBoldStringStyle:(long long)arg1;
- (id)primaryBoldLinkStringStyle:(long long)arg1;
- (id)socialContextStringStyleForMedia:(id)arg1;
- (id)viewCountStringStyleForMedia:(id)arg1;
- (id)likersStringStyleForMedia:(id)arg1;
- (id)commentStyleConfigurationForMedia:(id)arg1;
- (long long)ufiButtonColorTypeForMedia:(id)arg1;
- (id)separatorColor;
- (id)backgroundColorForMedia:(id)arg1;
- (id)containerBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

