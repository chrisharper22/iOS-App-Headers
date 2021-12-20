//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSNumber, NSString;

@interface IGTopicPreferencesUserIntentTarget : NSObject <FBIntentTarget>
{
    NSString *_eventSource;
    NSString *_mediaId;
    NSString *_authorId;
    NSString *_inventorySource;
    NSString *_rankingSessionID;
    NSString *_containerModule;
    NSNumber *_clientPosition;
    NSNumber *_feedRecsPostPosition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *feedRecsPostPosition; // @synthesize feedRecsPostPosition=_feedRecsPostPosition;
@property(readonly, nonatomic) NSNumber *clientPosition; // @synthesize clientPosition=_clientPosition;
@property(readonly, nonatomic) NSString *containerModule; // @synthesize containerModule=_containerModule;
@property(readonly, nonatomic) NSString *rankingSessionID; // @synthesize rankingSessionID=_rankingSessionID;
@property(readonly, nonatomic) NSString *inventorySource; // @synthesize inventorySource=_inventorySource;
@property(readonly, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(readonly, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) NSString *eventSource; // @synthesize eventSource=_eventSource;
- (id)initWithEventSource:(id)arg1 mediaId:(id)arg2 authorId:(id)arg3 inventorySource:(id)arg4 rankingSessionID:(id)arg5 containerModule:(id)arg6 clientPosition:(id)arg7 feedRecsPostPosition:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
