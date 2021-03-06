//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGSuggestedEntityInfo-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGUser, NSArray, NSString;

@interface IGSuggestedUserInfo : FBValueObject <IGSuggestedEntityInfo, IGListDiffable, NSCopying, NSCoding>
{
    IGUser *_user;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_mediaBundles;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *mediaBundles; // @synthesize mediaBundles=_mediaBundles;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 title:(id)arg2 subtitle:(id)arg3 mediaBundles:(id)arg4;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *entityPK;

@end

