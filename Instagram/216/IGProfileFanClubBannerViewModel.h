//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "IGTextViewItemViewModelProtocol-Protocol.h"

@class IGStyledString, IGTextRowChevronStyle, NSString, UIColor;

@interface IGProfileFanClubBannerViewModel : NSObject <IGListDiffable, IGTextViewItemViewModelProtocol>
{
    NSString *_username;
    NSString *_creatorUsername;
    UIColor *_backgroundColor;
    _Bool _shouldShowLearnMoreButton;
}

- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) long long numberOfLinesOfTruncatedString;
- (_Bool)shouldShowLearnMoreButton;
@property(readonly, nonatomic) IGTextRowChevronStyle *chevronStyle;
@property(readonly, nonatomic) _Bool shouldBadge;
@property(readonly, nonatomic) unsigned long long accessibilityType;
@property(readonly, nonatomic) _Bool usePaddedTapDetection;
@property(readonly, nonatomic) _Bool enableAccessibilityLinks;
@property(readonly, nonatomic) _Bool showsTopSeparator;
@property(readonly, nonatomic) _Bool showsBottomSeparator;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets insets;
@property(readonly, nonatomic) IGStyledString *styledString;
- (id)initWithUsername:(id)arg1 creatorUsername:(id)arg2 shouldShowLearnMoreButton:(_Bool)arg3 backgroundColor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

