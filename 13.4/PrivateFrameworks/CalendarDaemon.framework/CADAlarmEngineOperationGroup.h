//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADAlarmEngineInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>
{
}

+ (id)whitelistedBundles;
+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)_hasAccessToAlarmsOnCalendar:(void *)arg1;

@end

