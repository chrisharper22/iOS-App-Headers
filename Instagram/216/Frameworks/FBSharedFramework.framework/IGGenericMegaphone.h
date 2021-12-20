//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGMegaphoneButton, NSAttributedString, NSDictionary, NSString, NSURL, UIColor, UIImage;

@interface IGGenericMegaphone : NSObject <NSCopying, IGListDiffable>
{
    _Bool _dismissible;
    _Bool _showBottomSeparator;
    NSString *_title;
    NSString *_message;
    long long _megaphoneType;
    long long _buttonLayout;
    IGMegaphoneButton *_buttonOne;
    IGMegaphoneButton *_buttonTwo;
    IGMegaphoneButton *_buttonThree;
    NSString *_type;
    NSString *_uuid;
    NSString *_bottomMessage;
    NSURL *_iconURL;
    NSURL *_bottomIconURL;
    UIColor *_backgroundColor;
    UIColor *_dismissButtonColor;
    UIColor *_titleColor;
    UIColor *_messageColor;
    NSString *_iconHeight;
    NSString *_iconWidth;
    NSDictionary *_actionInfo;
    UIImage *_sideImage;
    double _imageTopPadding;
    NSAttributedString *_messageAttributedString;
    double _bottomMarginAdjustment;
}

+ (id)megaphoneFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double bottomMarginAdjustment; // @synthesize bottomMarginAdjustment=_bottomMarginAdjustment;
@property(retain, nonatomic) NSAttributedString *messageAttributedString; // @synthesize messageAttributedString=_messageAttributedString;
@property(nonatomic) _Bool showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(nonatomic) double imageTopPadding; // @synthesize imageTopPadding=_imageTopPadding;
@property(retain, nonatomic) UIImage *sideImage; // @synthesize sideImage=_sideImage;
@property(readonly, nonatomic) NSDictionary *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(readonly, nonatomic) NSString *iconWidth; // @synthesize iconWidth=_iconWidth;
@property(readonly, nonatomic) NSString *iconHeight; // @synthesize iconHeight=_iconHeight;
@property(readonly, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) UIColor *dismissButtonColor; // @synthesize dismissButtonColor=_dismissButtonColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) NSURL *bottomIconURL; // @synthesize bottomIconURL=_bottomIconURL;
@property(readonly, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) NSString *bottomMessage; // @synthesize bottomMessage=_bottomMessage;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) IGMegaphoneButton *buttonThree; // @synthesize buttonThree=_buttonThree;
@property(readonly, nonatomic) IGMegaphoneButton *buttonTwo; // @synthesize buttonTwo=_buttonTwo;
@property(readonly, nonatomic) IGMegaphoneButton *buttonOne; // @synthesize buttonOne=_buttonOne;
@property(readonly, nonatomic) long long buttonLayout; // @synthesize buttonLayout=_buttonLayout;
@property(readonly, nonatomic) long long megaphoneType; // @synthesize megaphoneType=_megaphoneType;
@property(readonly, nonatomic) _Bool dismissible; // @synthesize dismissible=_dismissible;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 dismissible:(_Bool)arg3 type:(id)arg4 iconURL:(id)arg5 bottomIconURL:(id)arg6 backgroundColor:(id)arg7 dismissButtonColor:(id)arg8 titleColor:(id)arg9 messageColor:(id)arg10 buttonOne:(id)arg11 buttonTwo:(id)arg12 buttonThree:(id)arg13 uuid:(id)arg14 bottomMessage:(id)arg15 actionInfo:(id)arg16 megaphoneType:(long long)arg17 buttonLayout:(long long)arg18 iconHeight:(id)arg19 iconWidth:(id)arg20 showBottomSeparator:(_Bool)arg21;

@end

