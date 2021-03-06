//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStyledString, IGTextRowChevronStyle, UIColor;

@protocol IGTextViewItemViewModelProtocol <NSObject>
@property(readonly, nonatomic) IGTextRowChevronStyle *chevronStyle;
@property(readonly, nonatomic) _Bool shouldBadge;
@property(readonly, nonatomic) long long numberOfLinesOfTruncatedString;
@property(readonly, nonatomic) _Bool usePaddedTapDetection;
@property(readonly, nonatomic) unsigned long long accessibilityType;
@property(readonly, nonatomic) _Bool enableAccessibilityLinks;
@property(readonly, nonatomic) _Bool showsTopSeparator;
@property(readonly, nonatomic) _Bool showsBottomSeparator;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets insets;
@property(readonly, nonatomic) IGStyledString *styledString;
@end

