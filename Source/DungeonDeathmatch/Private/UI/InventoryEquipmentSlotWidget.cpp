// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryEquipmentSlotWidget.h"

bool UInventoryEquipmentSlotWidget::IsOccupied()
{
	if (Item)
	{
		return true;
	}
	return false;
}

AItem* UInventoryEquipmentSlotWidget::GetItem()
{
	return Item;
}

void UInventoryEquipmentSlotWidget::SetItem(AItem* NewItem)
{
	Item = NewItem;
}
