//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGFanClubMemberPageIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _isEditable;
    _Bool _isModal;
    NSString *_containerModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *containerModule; // @synthesize containerModule=_containerModule;
@property(readonly, nonatomic) _Bool isModal; // @synthesize isModal=_isModal;
@property(readonly, nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
- (id)initWithIsEditable:(_Bool)arg1 isModal:(_Bool)arg2 containerModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

