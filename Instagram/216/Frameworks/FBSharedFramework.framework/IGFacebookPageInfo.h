//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFacebookPageInfoProtocol-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGBusinessConversionPageInvalidState, IGFacebookPageAddress, IGFacebookPageCity, IGFacebookPageLocation, IGFacebookPagePhoneNumber, NSArray, NSNumber, NSString, NSURL;

@interface IGFacebookPageInfo : NSObject <NSCopying, IGFacebookPageInfoProtocol>
{
    _Bool _isCallToActionEnabled;
    NSString *_pageID;
    NSString *_pageName;
    NSString *_publicEmail;
    IGFacebookPagePhoneNumber *_phoneNumber;
    unsigned long long _contactPreference;
    long long _categoryAccountType;
    NSString *_categoryName;
    NSString *_categoryID;
    NSURL *_profilePictureURL;
    IGFacebookPageAddress *_address;
    IGFacebookPageCity *_city;
    IGFacebookPageLocation *_location;
    NSArray *_connectedInstagramAccountIDs;
    NSString *_accessToken;
    NSString *_igUserId;
    NSString *_igUsername;
    NSNumber *_globalLikersCount;
    IGBusinessConversionPageInvalidState *_invalidState;
}

+ (id)pageInfoWithAllContactRemoved:(id)arg1;
+ (id)_stringValueFromArrayForKey:(id)arg1 inDict:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IGBusinessConversionPageInvalidState *invalidState; // @synthesize invalidState=_invalidState;
@property(retain, nonatomic) NSNumber *globalLikersCount; // @synthesize globalLikersCount=_globalLikersCount;
@property(nonatomic) _Bool isCallToActionEnabled; // @synthesize isCallToActionEnabled=_isCallToActionEnabled;
@property(copy, nonatomic) NSString *igUsername; // @synthesize igUsername=_igUsername;
@property(copy, nonatomic) NSString *igUserId; // @synthesize igUserId=_igUserId;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSArray *connectedInstagramAccountIDs; // @synthesize connectedInstagramAccountIDs=_connectedInstagramAccountIDs;
@property(retain, nonatomic) IGFacebookPageLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) IGFacebookPageCity *city; // @synthesize city=_city;
@property(retain, nonatomic) IGFacebookPageAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) long long categoryAccountType; // @synthesize categoryAccountType=_categoryAccountType;
@property(nonatomic) unsigned long long contactPreference; // @synthesize contactPreference=_contactPreference;
@property(copy, nonatomic) IGFacebookPagePhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *publicEmail; // @synthesize publicEmail=_publicEmail;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (void)_discardInvalidContactInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasPhoneNumber;
- (id)combinedPhoneNumber;
- (_Bool)hasAtLeastOneContactInfo;
- (id)combinedAddressString;
- (_Bool)_stringHasValue:(id)arg1;
- (id)initWithQuickConversionSetting:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

