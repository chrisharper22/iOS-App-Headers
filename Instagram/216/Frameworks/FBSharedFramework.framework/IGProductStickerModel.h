//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGSmartStickerModelType-Protocol.h>
#import <FBSharedFramework/IGStickerModelType-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class IGShoppingDropsLaunchAnimation, IGShoppingStoryDestination, NSString, UIColor;

@interface IGProductStickerModel : NSObject <IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSSecureCoding>
{
    _Bool _includeInRecent;
    _Bool _wasTextEdited;
    _Bool _isSetReminderButtonEnabled;
    _Bool _shoppingBundleEnabled;
    NSString *_pk;
    IGShoppingStoryDestination *_shoppingDestination;
    long long _style;
    NSString *_text;
    long long _textReviewStatus;
    UIColor *_primaryColor;
    NSString *_mediaId;
    NSString *_userId;
    long long _shoppingStickerType;
    IGShoppingDropsLaunchAnimation *_dropsLaunchAnimation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGShoppingDropsLaunchAnimation *dropsLaunchAnimation; // @synthesize dropsLaunchAnimation=_dropsLaunchAnimation;
@property(readonly, nonatomic) long long shoppingStickerType; // @synthesize shoppingStickerType=_shoppingStickerType;
@property(readonly, nonatomic) _Bool shoppingBundleEnabled; // @synthesize shoppingBundleEnabled=_shoppingBundleEnabled;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) _Bool isSetReminderButtonEnabled; // @synthesize isSetReminderButtonEnabled=_isSetReminderButtonEnabled;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) long long textReviewStatus; // @synthesize textReviewStatus=_textReviewStatus;
@property(readonly, nonatomic) _Bool wasTextEdited; // @synthesize wasTextEdited=_wasTextEdited;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) IGShoppingStoryDestination *shoppingDestination; // @synthesize shoppingDestination=_shoppingDestination;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (id)_parseDestinationFromDict:(id)arg1 objectStores:(id)arg2 shoppingStickerType:(long long)arg3;
- (void)_validateShoppingDestination:(id)arg1;
@property(readonly, copy, nonatomic) NSString *merchantId;
- (id)sharingInfo;
- (unsigned long long)smartStickerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool includeInRecent; // @synthesize includeInRecent=_includeInRecent;
- (id)initWithDict:(id)arg1 objectStores:(id)arg2 shoppingStickerType:(long long)arg3;
- (id)initWithShoppingDestination:(id)arg1 style:(long long)arg2 text:(id)arg3 wasTextEdited:(_Bool)arg4 primaryColor:(id)arg5 shoppingBundleEnabled:(_Bool)arg6;
- (id)_initWithPk:(id)arg1 style:(long long)arg2 text:(id)arg3 wasTextEdited:(_Bool)arg4 textReviewStatus:(long long)arg5 primaryColor:(id)arg6 includeInRecent:(_Bool)arg7 shoppingDestination:(id)arg8 mediaId:(id)arg9 userId:(id)arg10 isSetReminderButtonEnabled:(_Bool)arg11 shoppingBundleEnabled:(_Bool)arg12 shoppingStickerType:(long long)arg13 dropsLaunchAnimation:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

