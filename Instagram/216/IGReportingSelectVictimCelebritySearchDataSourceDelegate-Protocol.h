//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGReportingSelectVictimCelebritySearchDataSource, IGUser, NSString;

@protocol IGReportingSelectVictimCelebritySearchDataSourceDelegate <NSObject>
- (void)celebrityDataSource:(IGReportingSelectVictimCelebritySearchDataSource *)arg1 didSelectVictim:(IGUser *)arg2;
- (void)celebrityDataSourceDidFailLoad:(IGReportingSelectVictimCelebritySearchDataSource *)arg1 withError:(NSString *)arg2;
- (void)celebrityDataSourceDidFinishLoading:(IGReportingSelectVictimCelebritySearchDataSource *)arg1;
@end
