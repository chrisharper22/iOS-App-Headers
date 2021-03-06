//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGTextViewItemViewModelProtocol-Protocol.h>

@class IGStyledString, IGTextRowChevronStyle, NSString, UIColor;

@interface IGTextViewItemViewModel : NSObject <IGListDiffable, IGTextViewItemViewModelProtocol>
{
    _Bool _showsTopSeparator;
    _Bool _showsBottomSeparator;
    _Bool _usePaddedTapDetection;
    _Bool _enableAccessibilityLinks;
    _Bool _shouldBadge;
    NSString *_identifier;
    IGStyledString *_styledString;
    UIColor *_backgroundColor;
    unsigned long long _accessibilityType;
    long long _numberOfLinesOfTruncatedString;
    IGTextRowChevronStyle *_chevronStyle;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTextRowChevronStyle *chevronStyle; // @synthesize chevronStyle=_chevronStyle;
@property(readonly, nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(readonly, nonatomic) long long numberOfLinesOfTruncatedString; // @synthesize numberOfLinesOfTruncatedString=_numberOfLinesOfTruncatedString;
@property(readonly, nonatomic) unsigned long long accessibilityType; // @synthesize accessibilityType=_accessibilityType;
@property(readonly, nonatomic) _Bool enableAccessibilityLinks; // @synthesize enableAccessibilityLinks=_enableAccessibilityLinks;
@property(readonly, nonatomic) _Bool usePaddedTapDetection; // @synthesize usePaddedTapDetection=_usePaddedTapDetection;
@property(readonly, nonatomic) _Bool showsBottomSeparator; // @synthesize showsBottomSeparator=_showsBottomSeparator;
@property(readonly, nonatomic) _Bool showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithStyledString:(id)arg1 config:(struct IGTextViewItemViewModelConfig)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

