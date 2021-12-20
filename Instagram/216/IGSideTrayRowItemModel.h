//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGTableLayoutSpec, NSString, UIImage;

@interface IGSideTrayRowItemModel : NSObject <IGListDiffable>
{
    NSString *_title;
    NSString *_detailText;
    UIImage *_image;
    long long _badgeCount;
    long long _badgeStyle;
    IGTableLayoutSpec *_layoutSpec;
    long long _type;
    NSString *_tapAction;
    CDUnknownBlockType _tapActionBlock;
    NSString *_funnelLoggerActionName;
    NSString *_accessibilityIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *funnelLoggerActionName; // @synthesize funnelLoggerActionName=_funnelLoggerActionName;
@property(readonly, copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(readonly, copy, nonatomic) NSString *tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 image:(id)arg3 layoutSpec:(id)arg4 type:(long long)arg5 badgeStyle:(long long)arg6 tapAction:(id)arg7 actionBlock:(CDUnknownBlockType)arg8 funnelLoggerActionName:(id)arg9 accessibilityIdentifier:(id)arg10;

@end

