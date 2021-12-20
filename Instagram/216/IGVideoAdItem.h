//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGDirectResponseInfo, IGUser, IGVideo, NSArray, NSString;
@protocol IGSponsoredInfoProviding;

@interface IGVideoAdItem : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    IGVideo *_video;
    IGUser *_user;
    IGDirectResponseInfo *_directResponseInfo;
    id <IGSponsoredInfoProviding> _sponsoredInfo;
    NSArray *_brandedContentSponsors;
    NSString *_caption;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSArray *brandedContentSponsors; // @synthesize brandedContentSponsors=_brandedContentSponsors;
@property(readonly, nonatomic) id <IGSponsoredInfoProviding> sponsoredInfo; // @synthesize sponsoredInfo=_sponsoredInfo;
@property(readonly, copy, nonatomic) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
@property(readonly, copy, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) IGVideo *video; // @synthesize video=_video;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithVideo:(id)arg1 user:(id)arg2 directResponseInfo:(id)arg3 sponsoredInfo:(id)arg4 brandedContentSponsors:(id)arg5 caption:(id)arg6;

@end

