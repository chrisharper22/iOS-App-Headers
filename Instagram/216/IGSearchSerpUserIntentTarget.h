//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGSearchSession, IGSessionTracker, NSString;

@interface IGSearchSerpUserIntentTarget : NSObject <FBIntentTarget>
{
    NSString *_searchText;
    IGSessionTracker *_searchSessionTracker;
    IGSearchSession *_serpSession;
    NSString *_priorSerpSessionId;
    NSString *_priorQuery;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *priorQuery; // @synthesize priorQuery=_priorQuery;
@property(readonly, nonatomic) NSString *priorSerpSessionId; // @synthesize priorSerpSessionId=_priorSerpSessionId;
@property(readonly, nonatomic) IGSearchSession *serpSession; // @synthesize serpSession=_serpSession;
@property(readonly, nonatomic) IGSessionTracker *searchSessionTracker; // @synthesize searchSessionTracker=_searchSessionTracker;
@property(readonly, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (id)initWithSearchText:(id)arg1 searchSessionTracker:(id)arg2 serpSession:(id)arg3 priorSerpSessionId:(id)arg4 priorQuery:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

