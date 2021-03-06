//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLoadMoreResponseType-Protocol.h"

@class NSDictionary, NSString;

@interface IGUnifiedTagsListResponse : NSObject <IGLoadMoreResponseType>
{
    NSString *_maxId;
    NSDictionary *_tagTypeToTagsMap;
    NSDictionary *_hashtagNameToFollowStatusMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *hashtagNameToFollowStatusMap; // @synthesize hashtagNameToFollowStatusMap=_hashtagNameToFollowStatusMap;
@property(readonly, copy, nonatomic) NSDictionary *tagTypeToTagsMap; // @synthesize tagTypeToTagsMap=_tagTypeToTagsMap;
- (id)maxId;
- (id)initWithTagTypeToTagsMap:(id)arg1 hashtagNameToFollowStatusMap:(id)arg2 maxId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

