//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGTagLoggable-Protocol.h>
#import <FBSharedFramework/IGTaggableObject-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGSuggestedProductTagsDetectedProductModel : IGValueObject <IGTagLoggable, IGTaggableObject, NSCopying, NSCoding>
{
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (id)confidenceLevel;
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
