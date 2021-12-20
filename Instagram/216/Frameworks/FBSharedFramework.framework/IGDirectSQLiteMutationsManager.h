//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSQLiteClauseProvider-Protocol.h>

@class IGSQLiteTable, NSString;

@interface IGDirectSQLiteMutationsManager : NSObject <IGSQLiteClauseProvider>
{
    IGSQLiteTable *_table;
}

- (void).cxx_destruct;
- (id)orderByClause;
- (id)whereClauseForItem:(id)arg1;
- (_Bool)removeRequestStateForMutationId:(id)arg1;
- (_Bool)saveRequestState:(id)arg1;
- (id)storedRequestStates;
- (id)initWithSQLiteTable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
