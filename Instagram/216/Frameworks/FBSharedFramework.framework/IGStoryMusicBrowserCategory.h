//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGStoryMusicBrowserCategory : NSObject
{
    NSString *_categoryID;
    NSString *_displayName;
    NSString *_emptyStateText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *emptyStateText; // @synthesize emptyStateText=_emptyStateText;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
- (id)initWithCategoryID:(id)arg1 displayName:(id)arg2 emptyStateText:(id)arg3;

@end

