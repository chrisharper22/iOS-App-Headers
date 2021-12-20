//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "IGTextViewItemViewModelProtocol-Protocol.h"

@class IGStyledString, IGTextRowChevronStyle, NSString, UIColor;

@interface IGProfileBusinessHubViewModel : NSObject <IGListDiffable, IGTextViewItemViewModelProtocol>
{
    NSString *_title;
    NSString *_bannerSubtitle;
    _Bool _shouldBadge;
    _Bool _showAsBanner;
    IGTextRowChevronStyle *_chevronStyle;
}

- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) IGTextRowChevronStyle *chevronStyle;
@property(readonly, nonatomic) long long numberOfLinesOfTruncatedString;
@property(readonly, nonatomic) _Bool shouldBadge;
@property(readonly, nonatomic) unsigned long long accessibilityType;
@property(readonly, nonatomic) _Bool usePaddedTapDetection;
@property(readonly, nonatomic) _Bool enableAccessibilityLinks;
@property(readonly, nonatomic) _Bool showsTopSeparator;
@property(readonly, nonatomic) _Bool showsBottomSeparator;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets insets;
@property(readonly, nonatomic) IGStyledString *styledString;
- (id)initWithTitle:(id)arg1 bannerSubtitle:(id)arg2 shouldBadge:(_Bool)arg3 showAsBanner:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

