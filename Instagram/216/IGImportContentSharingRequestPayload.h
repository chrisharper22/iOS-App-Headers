//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGUserSessionPayload-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGImportContentSharingRequestPayload : FBValueObject <IGUserSessionPayload, NSCopying, NSCoding>
{
    NSString *_targetUserPk;
    NSString *_mediaOwnerID;
    NSString *_mediaMetaData;
    NSString *_authHeader;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *authHeader; // @synthesize authHeader=_authHeader;
@property(readonly, copy, nonatomic) NSString *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property(readonly, copy, nonatomic) NSString *mediaOwnerID; // @synthesize mediaOwnerID=_mediaOwnerID;
@property(readonly, copy, nonatomic) NSString *targetUserPk; // @synthesize targetUserPk=_targetUserPk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTargetUserPk:(id)arg1 mediaOwnerID:(id)arg2 mediaMetaData:(id)arg3 authHeader:(id)arg4;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

