//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionPayload-Protocol.h"

@class NSString;

@interface IGImportContentMediaRequestPayload : NSObject <IGUserSessionPayload>
{
    NSString *_targetUserPk;
    NSString *_maxID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(copy, nonatomic) NSString *targetUserPk; // @synthesize targetUserPk=_targetUserPk;
- (id)initWithTargetUserPk:(id)arg1 maxID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
