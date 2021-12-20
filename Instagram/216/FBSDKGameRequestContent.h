//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKSharingValidation-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface FBSDKGameRequestContent : NSObject <NSCopying, NSObject, FBSDKSharingValidation, NSSecureCoding>
{
    unsigned long long _actionType;
    NSString *_data;
    unsigned long long _filters;
    NSString *_message;
    NSString *_objectID;
    NSArray *_recipients;
    NSArray *_recipientSuggestions;
    NSString *_title;
    NSString *_cta;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cta; // @synthesize cta=_cta;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *recipientSuggestions; // @synthesize recipientSuggestions=_recipientSuggestions;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToGameRequestContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)validateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (void)setTo:(id)arg1;
- (id)to;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

