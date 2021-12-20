//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionEndingObject-Protocol.h"

@class IGUserDefaults, NSMutableDictionary;

@interface IGFlaggedCommentLedger : NSObject <IGUserSessionEndingObject>
{
    NSMutableDictionary *_flaggedComments;
    IGUserDefaults *_sessionUserDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
- (void)userSessionWillEnd;
- (id)extraForCommentLoggingWithPreviewCommentsUnfiltered:(id)arg1;
- (id)filterComments:(id)arg1;
- (void)_archive;
- (void)clear;
- (_Bool)containsComment:(id)arg1;
- (void)addComment:(id)arg1;
- (void)_migrateUserDefaultsIfNecessary;
- (id)initWithSessionUserDefaults:(id)arg1;

@end
