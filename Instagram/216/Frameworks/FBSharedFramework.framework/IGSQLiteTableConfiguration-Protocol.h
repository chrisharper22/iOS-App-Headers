//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGSQLiteColumn, IGSQLiteRelationship, NSArray, NSSet, NSString;

@protocol IGSQLiteTableConfiguration <NSObject>
- (_Bool)shouldStoreClassName;
- (_Bool)archivable;
- (IGSQLiteRelationship *)relationshipForPropertyName:(NSString *)arg1;
- (NSString *)tableCreationStatement;
- (IGSQLiteColumn *)columnForColumnName:(NSString *)arg1;
- (IGSQLiteColumn *)columnForPropertyName:(NSString *)arg1;
- (NSSet *)transformableColumnNames;
- (NSArray *)relationships;
- (NSSet *)propertyNames;
- (NSString *)className;
- (NSString *)columnNameInForeignTable;
- (NSString *)tableName;
@end

