//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "IGStoryTrayDataSource-Protocol.h"

@class IGUserSession, NSString;

@interface IGHighlightsPlaceholderTrayDataSource : NSObject <IGStoryTrayDataSource, IGListDiffable>
{
    NSString *_userPK;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)viewModelForLiveBroadcast:(id)arg1;
- (id)viewModelForReel:(id)arg1;
- (id)allItemsForTray;
@property(readonly, nonatomic) _Bool trayShouldScrollToEndOnDismiss;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithUserPK:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

