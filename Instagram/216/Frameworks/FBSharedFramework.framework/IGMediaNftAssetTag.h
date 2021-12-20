//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGTagLoggable-Protocol.h>
#import <FBSharedFramework/IGTaggableObject-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IGMediaNftAssetTag : FBValueObject <IGTaggableObject, IGTagLoggable, NSCopying, NSCoding>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_position;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 position:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (long long)entityType;
- (id)entityName;
- (id)entityID;
@property(readonly, nonatomic) NSString *pk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

