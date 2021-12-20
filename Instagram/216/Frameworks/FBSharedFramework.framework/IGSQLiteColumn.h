//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGSQLiteColumn : NSObject
{
    NSString *_columnName;
    NSString *_columnTypeString;
    NSString *_propertyName;
    NSString *_propertyClassName;
    NSArray *_applicableClasses;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *applicableClasses; // @synthesize applicableClasses=_applicableClasses;
@property(readonly, copy, nonatomic) NSString *propertyClassName; // @synthesize propertyClassName=_propertyClassName;
@property(readonly, copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, copy, nonatomic) NSString *columnTypeString; // @synthesize columnTypeString=_columnTypeString;
@property(readonly, copy, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
- (id)_classArrayFromClassNameArray:(id)arg1;
- (_Bool)columnIsApplicableForClass:(Class)arg1;
@property(readonly, nonatomic) long long columnType;
- (id)initWithColumnName:(id)arg1 columnTypeString:(id)arg2 propertyName:(id)arg3 propertyClassName:(id)arg4 applicableClassNames:(id)arg5;

@end

